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
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/ApplicationPolicyStatement.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API PutApplicationPolicyResult
  {
  public:
    PutApplicationPolicyResult();
    PutApplicationPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutApplicationPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Array of policy statements applied to the application.
     */
    inline const Aws::Vector<ApplicationPolicyStatement>& GetStatements() const{ return m_statements; }

    /**
     * Array of policy statements applied to the application.
     */
    inline void SetStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { m_statements = value; }

    /**
     * Array of policy statements applied to the application.
     */
    inline void SetStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { m_statements = std::move(value); }

    /**
     * Array of policy statements applied to the application.
     */
    inline PutApplicationPolicyResult& WithStatements(const Aws::Vector<ApplicationPolicyStatement>& value) { SetStatements(value); return *this;}

    /**
     * Array of policy statements applied to the application.
     */
    inline PutApplicationPolicyResult& WithStatements(Aws::Vector<ApplicationPolicyStatement>&& value) { SetStatements(std::move(value)); return *this;}

    /**
     * Array of policy statements applied to the application.
     */
    inline PutApplicationPolicyResult& AddStatements(const ApplicationPolicyStatement& value) { m_statements.push_back(value); return *this; }

    /**
     * Array of policy statements applied to the application.
     */
    inline PutApplicationPolicyResult& AddStatements(ApplicationPolicyStatement&& value) { m_statements.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ApplicationPolicyStatement> m_statements;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
