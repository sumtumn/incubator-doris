
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#include "vec/data_types/data_type_number.h"
#include "vec/functions/date_time_transforms.h"
#include "vec/functions/function_date_or_datetime_to_something.h"
#include "vec/functions/simple_function_factory.h"

namespace doris::vectorized {

using FunctionYear =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToYearImpl<VecDateTimeValue, Int64>>;
using FunctionYearV2 =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToYearImpl<DateV2Value, UInt32>>;
using FunctionQuarter =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToQuarterImpl<VecDateTimeValue, Int64>>;
using FunctionQuarterV2 =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToQuarterImpl<DateV2Value, UInt32>>;
using FunctionMonth =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToMonthImpl<VecDateTimeValue, Int64>>;
using FunctionMonthV2 =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToMonthImpl<DateV2Value, UInt32>>;
using FunctionDay =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToDayImpl<VecDateTimeValue, Int64>>;
using FunctionDayV2 =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToDayImpl<DateV2Value, UInt32>>;
using FunctionWeek =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToWeekOneArgImpl<VecDateTimeValue, Int64>>;
using FunctionWeekV2 =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToWeekOneArgImpl<DateV2Value, UInt32>>;
using FunctionHour =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToHourImpl<VecDateTimeValue, Int64>>;
using FunctionHourV2 =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToHourImpl<DateV2Value, UInt32>>;
using FunctionMinute =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToMinuteImpl<VecDateTimeValue, Int64>>;
using FunctionMinuteV2 =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToMinuteImpl<DateV2Value, UInt32>>;
using FunctionSecond =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToSecondImpl<VecDateTimeValue, Int64>>;
using FunctionSecondV2 =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToSecondImpl<DateV2Value, UInt32>>;
using FunctionToDays =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToDaysImpl<VecDateTimeValue, Int64>>;
using FunctionToDaysV2 =
        FunctionDateOrDateTimeToSomething<DataTypeInt32, ToDaysImpl<DateV2Value, UInt32>>;
using FunctionToDate =
        FunctionDateOrDateTimeToSomething<DataTypeDateTime, ToDateImpl<VecDateTimeValue, Int64>>;
using FunctionToDateV2 =
        FunctionDateOrDateTimeToSomething<DataTypeDateV2, ToDateImpl<DateV2Value, UInt32>>;
using FunctionDate =
        FunctionDateOrDateTimeToSomething<DataTypeDateTime, DateImpl<VecDateTimeValue, Int64>>;
using FunctionDateV2 =
        FunctionDateOrDateTimeToSomething<DataTypeDateV2, DateImpl<DateV2Value, UInt32>>;
using FunctionTimeStamp = FunctionDateOrDateTimeToSomething<DataTypeDateTime, TimeStampImpl<Int64>>;
using FunctionTimeStampV2 =
        FunctionDateOrDateTimeToSomething<DataTypeDateV2, TimeStampImpl<UInt32>>;

void register_function_to_time_function(SimpleFunctionFactory& factory) {
    factory.register_function<FunctionSecond>();
    factory.register_function<FunctionMinute>();
    factory.register_function<FunctionHour>();
    factory.register_function<FunctionDay>();
    factory.register_function<FunctionWeek>();
    factory.register_function<FunctionMonth>();
    factory.register_function<FunctionYear>();
    factory.register_function<FunctionQuarter>();
    factory.register_function<FunctionToDays>();
    factory.register_function<FunctionToDate>();
    factory.register_function<FunctionDate>();
    factory.register_function<FunctionTimeStamp>();
    factory.register_function<FunctionSecondV2>();
    factory.register_function<FunctionMinuteV2>();
    factory.register_function<FunctionHourV2>();
    factory.register_function<FunctionDayV2>();
    factory.register_function<FunctionWeekV2>();
    factory.register_function<FunctionMonthV2>();
    factory.register_function<FunctionYearV2>();
    factory.register_function<FunctionQuarterV2>();
    factory.register_function<FunctionToDaysV2>();
    factory.register_function<FunctionToDateV2>();
    factory.register_function<FunctionDateV2>();
    factory.register_function<FunctionTimeStampV2>();
}

} // namespace doris::vectorized
