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
 * @file plant.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "plant.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

plant::plant()
{

    m_id = 0;

    m_date = 0;




}

plant::~plant()
{
}

plant::plant(const plant &x)
{
    m_type = x.m_type;
    m_id = x.m_id;
    m_date = x.m_date;
    m_location = x.m_location;
    m_state = x.m_state;
}

plant::plant(plant &&x)
{
    m_type = std::move(x.m_type);
    m_id = x.m_id;
    m_date = x.m_date;
    m_location = std::move(x.m_location);
    m_state = std::move(x.m_state);
}

plant& plant::operator=(const plant &x)
{
    m_type = x.m_type;
    m_id = x.m_id;
    m_date = x.m_date;
    m_location = x.m_location;
    m_state = x.m_state;

    return *this;
}

plant& plant::operator=(plant &&x)
{
    m_type = std::move(x.m_type);
    m_id = x.m_id;
    m_date = x.m_date;
    m_location = std::move(x.m_location);
    m_state = std::move(x.m_state);

    return *this;
}

size_t plant::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;


    return current_alignment - initial_alignment;
}

size_t plant::getCdrSerializedSize(const plant& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.type().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.location().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.state().size() + 1;


    return current_alignment - initial_alignment;
}

void plant::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_type;
    scdr << m_id;
    scdr << m_date;
    scdr << m_location;
    scdr << m_state;
}

void plant::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_type;
    dcdr >> m_id;
    dcdr >> m_date;
    dcdr >> m_location;
    dcdr >> m_state;
}

size_t plant::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            






    return current_align;
}

bool plant::isKeyDefined()
{
    return false;
}

void plant::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	(void) scdr;
	 
	 
	 
	 
	 
}