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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/PullRequestStatusEnum.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API UpdatePullRequestStatusRequest : public CodeCommitRequest
  {
  public:
    UpdatePullRequestStatusRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePullRequestStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline UpdatePullRequestStatusRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline UpdatePullRequestStatusRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline UpdatePullRequestStatusRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The status of the pull request. The only valid operations are to update the
     * status from <code>OPEN</code> to <code>OPEN</code>, <code>OPEN</code> to
     * <code>CLOSED</code> or from from <code>CLOSED</code> to <code>CLOSED</code>.</p>
     */
    inline const PullRequestStatusEnum& GetPullRequestStatus() const{ return m_pullRequestStatus; }

    /**
     * <p>The status of the pull request. The only valid operations are to update the
     * status from <code>OPEN</code> to <code>OPEN</code>, <code>OPEN</code> to
     * <code>CLOSED</code> or from from <code>CLOSED</code> to <code>CLOSED</code>.</p>
     */
    inline void SetPullRequestStatus(const PullRequestStatusEnum& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = value; }

    /**
     * <p>The status of the pull request. The only valid operations are to update the
     * status from <code>OPEN</code> to <code>OPEN</code>, <code>OPEN</code> to
     * <code>CLOSED</code> or from from <code>CLOSED</code> to <code>CLOSED</code>.</p>
     */
    inline void SetPullRequestStatus(PullRequestStatusEnum&& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = std::move(value); }

    /**
     * <p>The status of the pull request. The only valid operations are to update the
     * status from <code>OPEN</code> to <code>OPEN</code>, <code>OPEN</code> to
     * <code>CLOSED</code> or from from <code>CLOSED</code> to <code>CLOSED</code>.</p>
     */
    inline UpdatePullRequestStatusRequest& WithPullRequestStatus(const PullRequestStatusEnum& value) { SetPullRequestStatus(value); return *this;}

    /**
     * <p>The status of the pull request. The only valid operations are to update the
     * status from <code>OPEN</code> to <code>OPEN</code>, <code>OPEN</code> to
     * <code>CLOSED</code> or from from <code>CLOSED</code> to <code>CLOSED</code>.</p>
     */
    inline UpdatePullRequestStatusRequest& WithPullRequestStatus(PullRequestStatusEnum&& value) { SetPullRequestStatus(std::move(value)); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet;

    PullRequestStatusEnum m_pullRequestStatus;
    bool m_pullRequestStatusHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
