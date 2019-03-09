// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file plantPubSubMain.cpp
 * This file acts as a main entry point to the application.
 *
 * This file was generated by the tool fastcdrgen.
 */


#include "plantPublisher.h"
#include "plantSubscriber.h"


#include <fastrtps/Domain.h>

using namespace eprosima;
using namespace eprosima::fastrtps;

int main(int argc, char** argv)
{
	int  pubsub = 0;
	std::string type, location;
	int id;
	if (argc == 5){
		if (strcmp(argv[1], "publisher") == 0)
		{
			pubsub = 1;
		}
		else if (strcmp(argv[1], "subscriber") == 0)
		{
			pubsub = 2;
		}

		type = argv[2];
		id = std::stoi(argv[3]);
		location = argv[4];
	}
	else {
		std::cout << "Error: Incorrect arguments." << std::endl;
        	std::cout << "Usage: " << std::endl << std::endl;
		std::cout << argv[0] << " publisher|subscriber" << std::endl << std::endl;
		return 0;
	}

	std::cout << "Starting " << std::endl;

	switch(pubsub)
	{
		case 1:
		{
			plantPublisher mypub;
			if (mypub.init())
			{
				while(1){
					std::string state;
					std::cout << "\nstate: ";
					std::cin >> state;
					mypub.pub(type, id, (int)std::time(nullptr), location, state);
				}
			}
			break;
		}
		case 2:
		{
			plantSubscriber mysub;
			if (mysub.init())
			{
				mysub.run();
			}
			break;
		}
	}

	return 0;
}
