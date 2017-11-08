﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/waf/model/GeoMatchConstraintType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace GeoMatchConstraintTypeMapper
      {

        static const int Country_HASH = HashingUtils::HashString("Country");


        GeoMatchConstraintType GetGeoMatchConstraintTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Country_HASH)
          {
            return GeoMatchConstraintType::Country;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeoMatchConstraintType>(hashCode);
          }

          return GeoMatchConstraintType::NOT_SET;
        }

        Aws::String GetNameForGeoMatchConstraintType(GeoMatchConstraintType enumValue)
        {
          switch(enumValue)
          {
          case GeoMatchConstraintType::Country:
            return "Country";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace GeoMatchConstraintTypeMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
