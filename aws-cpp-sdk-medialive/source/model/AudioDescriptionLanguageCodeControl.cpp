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

#include <aws/medialive/model/AudioDescriptionLanguageCodeControl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AudioDescriptionLanguageCodeControlMapper
      {

        static const int FOLLOW_INPUT_HASH = HashingUtils::HashString("FOLLOW_INPUT");
        static const int USE_CONFIGURED_HASH = HashingUtils::HashString("USE_CONFIGURED");


        AudioDescriptionLanguageCodeControl GetAudioDescriptionLanguageCodeControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_INPUT_HASH)
          {
            return AudioDescriptionLanguageCodeControl::FOLLOW_INPUT;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return AudioDescriptionLanguageCodeControl::USE_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioDescriptionLanguageCodeControl>(hashCode);
          }

          return AudioDescriptionLanguageCodeControl::NOT_SET;
        }

        Aws::String GetNameForAudioDescriptionLanguageCodeControl(AudioDescriptionLanguageCodeControl enumValue)
        {
          switch(enumValue)
          {
          case AudioDescriptionLanguageCodeControl::FOLLOW_INPUT:
            return "FOLLOW_INPUT";
          case AudioDescriptionLanguageCodeControl::USE_CONFIGURED:
            return "USE_CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AudioDescriptionLanguageCodeControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
