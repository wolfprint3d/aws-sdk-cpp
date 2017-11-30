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

#include <aws/route53/model/AccountLimit.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

AccountLimit::AccountLimit() : 
    m_type(AccountLimitType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

AccountLimit::AccountLimit(const XmlNode& xmlNode) : 
    m_type(AccountLimitType::NOT_SET),
    m_typeHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

AccountLimit& AccountLimit::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = AccountLimitTypeMapper::GetAccountLimitTypeForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = StringUtils::ConvertToInt64(StringUtils::Trim(valueNode.GetText().c_str()).c_str());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void AccountLimit::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_typeHasBeenSet)
  {
   XmlNode typeNode = parentNode.CreateChildElement("Type");
   typeNode.SetText(AccountLimitTypeMapper::GetNameForAccountLimitType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   XmlNode valueNode = parentNode.CreateChildElement("Value");
   ss << m_value;
   valueNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
