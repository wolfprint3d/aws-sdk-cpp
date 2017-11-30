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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Image.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class AWS_REKOGNITION_API DetectTextRequest : public RekognitionRequest
  {
  public:
    DetectTextRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectText"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The input image as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Rekognition operations, you can't pass image bytes.
     * </p>
     */
    inline const Image& GetImage() const{ return m_image; }

    /**
     * <p>The input image as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Rekognition operations, you can't pass image bytes.
     * </p>
     */
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The input image as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Rekognition operations, you can't pass image bytes.
     * </p>
     */
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The input image as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Rekognition operations, you can't pass image bytes.
     * </p>
     */
    inline DetectTextRequest& WithImage(const Image& value) { SetImage(value); return *this;}

    /**
     * <p>The input image as base64-encoded bytes or an Amazon S3 object. If you use
     * the AWS CLI to call Amazon Rekognition operations, you can't pass image bytes.
     * </p>
     */
    inline DetectTextRequest& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}

  private:

    Image m_image;
    bool m_imageHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
