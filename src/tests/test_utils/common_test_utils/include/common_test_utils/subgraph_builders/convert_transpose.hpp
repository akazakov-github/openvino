// Copyright (C) 2018-2023 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//
#pragma once

#include "openvino/core/model.hpp"

namespace ov {
namespace test {
namespace utils {
std::shared_ptr<ov::Model> make_convert_transpose(ov::Shape input_shape = {1, 3, 24, 24},
                                                  std::vector<size_t> input_order = {0, 1, 2, 3},
                                                  ov::element::Type type = ov::element::f32);
}  // namespace utils
}  // namespace test
}  // namespace ov