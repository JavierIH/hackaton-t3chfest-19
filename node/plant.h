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
 * @file plant.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _PLANT_H_
#define _PLANT_H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(plant_SOURCE)
#define plant_DllAPI __declspec( dllexport )
#else
#define plant_DllAPI __declspec( dllimport )
#endif // plant_SOURCE
#else
#define plant_DllAPI
#endif
#else
#define plant_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}

/*!
 * @brief This class represents the structure plant defined by the user in the IDL file.
 * @ingroup PLANT
 */
class plant
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport plant();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~plant();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object plant that will be copied.
     */
    eProsima_user_DllExport plant(const plant &x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object plant that will be copied.
     */
    eProsima_user_DllExport plant(plant &&x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object plant that will be copied.
     */
    eProsima_user_DllExport plant& operator=(const plant &x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object plant that will be copied.
     */
    eProsima_user_DllExport plant& operator=(plant &&x);

    /*!
     * @brief This function copies the value in member type
     * @param _type New value to be copied in member type
     */
    inline eProsima_user_DllExport void type(const std::string &_type)
    {
        m_type = _type;
    }

    /*!
     * @brief This function moves the value in member type
     * @param _type New value to be moved in member type
     */
    inline eProsima_user_DllExport void type(std::string &&_type)
    {
        m_type = std::move(_type);
    }

    /*!
     * @brief This function returns a constant reference to member type
     * @return Constant reference to member type
     */
    inline eProsima_user_DllExport const std::string& type() const
    {
        return m_type;
    }

    /*!
     * @brief This function returns a reference to member type
     * @return Reference to member type
     */
    inline eProsima_user_DllExport std::string& type()
    {
        return m_type;
    }
    /*!
     * @brief This function sets a value in member id
     * @param _id New value for member id
     */
    inline eProsima_user_DllExport void id(uint32_t _id)
    {
        m_id = _id;
    }

    /*!
     * @brief This function returns the value of member id
     * @return Value of member id
     */
    inline eProsima_user_DllExport uint32_t id() const
    {
        return m_id;
    }

    /*!
     * @brief This function returns a reference to member id
     * @return Reference to member id
     */
    inline eProsima_user_DllExport uint32_t& id()
    {
        return m_id;
    }
    /*!
     * @brief This function sets a value in member date
     * @param _date New value for member date
     */
    inline eProsima_user_DllExport void date(uint32_t _date)
    {
        m_date = _date;
    }

    /*!
     * @brief This function returns the value of member date
     * @return Value of member date
     */
    inline eProsima_user_DllExport uint32_t date() const
    {
        return m_date;
    }

    /*!
     * @brief This function returns a reference to member date
     * @return Reference to member date
     */
    inline eProsima_user_DllExport uint32_t& date()
    {
        return m_date;
    }
    /*!
     * @brief This function copies the value in member location
     * @param _location New value to be copied in member location
     */
    inline eProsima_user_DllExport void location(const std::string &_location)
    {
        m_location = _location;
    }

    /*!
     * @brief This function moves the value in member location
     * @param _location New value to be moved in member location
     */
    inline eProsima_user_DllExport void location(std::string &&_location)
    {
        m_location = std::move(_location);
    }

    /*!
     * @brief This function returns a constant reference to member location
     * @return Constant reference to member location
     */
    inline eProsima_user_DllExport const std::string& location() const
    {
        return m_location;
    }

    /*!
     * @brief This function returns a reference to member location
     * @return Reference to member location
     */
    inline eProsima_user_DllExport std::string& location()
    {
        return m_location;
    }
    /*!
     * @brief This function copies the value in member state
     * @param _state New value to be copied in member state
     */
    inline eProsima_user_DllExport void state(const std::string &_state)
    {
        m_state = _state;
    }

    /*!
     * @brief This function moves the value in member state
     * @param _state New value to be moved in member state
     */
    inline eProsima_user_DllExport void state(std::string &&_state)
    {
        m_state = std::move(_state);
    }

    /*!
     * @brief This function returns a constant reference to member state
     * @return Constant reference to member state
     */
    inline eProsima_user_DllExport const std::string& state() const
    {
        return m_state;
    }

    /*!
     * @brief This function returns a reference to member state
     * @return Reference to member state
     */
    inline eProsima_user_DllExport std::string& state()
    {
        return m_state;
    }

    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(const plant& data, size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

private:
    std::string m_type;
    uint32_t m_id;
    uint32_t m_date;
    std::string m_location;
    std::string m_state;
};

#endif // _PLANT_H_