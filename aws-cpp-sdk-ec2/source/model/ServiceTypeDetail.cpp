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

#include <aws/ec2/model/ServiceTypeDetail.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ServiceTypeDetail::ServiceTypeDetail() : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
}

ServiceTypeDetail::ServiceTypeDetail(const XmlNode& xmlNode) : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false)
{
  *this = xmlNode;
}

ServiceTypeDetail& ServiceTypeDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceTypeNode = resultNode.FirstChild("serviceType");
    if(!serviceTypeNode.IsNull())
    {
      m_serviceType = ServiceTypeMapper::GetServiceTypeForName(StringUtils::Trim(serviceTypeNode.GetText().c_str()).c_str());
      m_serviceTypeHasBeenSet = true;
    }
  }

  return *this;
}

void ServiceTypeDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceType=" << ServiceTypeMapper::GetNameForServiceType(m_serviceType) << "&";
  }

}

void ServiceTypeDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceTypeHasBeenSet)
  {
      oStream << location << ".ServiceType=" << ServiceTypeMapper::GetNameForServiceType(m_serviceType) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
