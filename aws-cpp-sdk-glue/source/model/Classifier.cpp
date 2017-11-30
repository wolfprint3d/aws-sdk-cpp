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

#include <aws/glue/model/Classifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Classifier::Classifier() : 
    m_grokClassifierHasBeenSet(false),
    m_xMLClassifierHasBeenSet(false)
{
}

Classifier::Classifier(const JsonValue& jsonValue) : 
    m_grokClassifierHasBeenSet(false),
    m_xMLClassifierHasBeenSet(false)
{
  *this = jsonValue;
}

Classifier& Classifier::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("GrokClassifier"))
  {
    m_grokClassifier = jsonValue.GetObject("GrokClassifier");

    m_grokClassifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XMLClassifier"))
  {
    m_xMLClassifier = jsonValue.GetObject("XMLClassifier");

    m_xMLClassifierHasBeenSet = true;
  }

  return *this;
}

JsonValue Classifier::Jsonize() const
{
  JsonValue payload;

  if(m_grokClassifierHasBeenSet)
  {
   payload.WithObject("GrokClassifier", m_grokClassifier.Jsonize());

  }

  if(m_xMLClassifierHasBeenSet)
  {
   payload.WithObject("XMLClassifier", m_xMLClassifier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
