/*
 * Copyright 2001,2004 The Apache Software Foundation.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id: IC_Key.cpp 191054 2005-06-17 02:56:35Z jberry $
 */

// ---------------------------------------------------------------------------
//  Includes
// ---------------------------------------------------------------------------
#include <xercesc/validators/schema/identity/IC_Key.hpp>

XERCES_CPP_NAMESPACE_BEGIN

// ---------------------------------------------------------------------------
//  IC_Key: Constructors and Destructor
// ---------------------------------------------------------------------------
IC_Key::IC_Key(const XMLCh* const identityConstraintName,
               const XMLCh* const elemName,
			   MemoryManager* const manager)
:IdentityConstraint(identityConstraintName, elemName, manager)
{
}


IC_Key::~IC_Key()
{
}

/***
 * Support for Serialization/De-serialization
 ***/

IMPL_XSERIALIZABLE_TOCREATE(IC_Key)

void IC_Key::serialize(XSerializeEngine& serEng)
{
    IdentityConstraint::serialize(serEng);

    //no data
}

IC_Key::IC_Key(MemoryManager* const manager)
:IdentityConstraint(0, 0, manager)
{
}

XERCES_CPP_NAMESPACE_END

/**
  * End of file IC_Key.cpp
  */
