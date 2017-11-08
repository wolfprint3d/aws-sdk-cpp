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

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFRONT_API DeleteServiceLinkedRole2017_03_25Request : public CloudFrontRequest
  {
  public:
    DeleteServiceLinkedRole2017_03_25Request();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServiceLinkedRole"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    
    inline DeleteServiceLinkedRole2017_03_25Request& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    
    inline DeleteServiceLinkedRole2017_03_25Request& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    
    inline DeleteServiceLinkedRole2017_03_25Request& WithRoleName(const char* value) { SetRoleName(value); return *this;}

  private:

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
