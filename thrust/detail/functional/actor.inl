/*
 *  Copyright 2008-2011 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

namespace thrust
{

namespace detail
{

template<typename Eval>
  actor<Eval>
    ::actor(void)
      : eval_type()
{}

template<typename Eval>
  actor<Eval>
    ::actor(const Eval &base)
      : eval_type(base)
{}

template<typename Eval>
  typename apply_actor<
    typename actor<Eval>::eval_type,
    typename thrust::null_type
  >::type
    actor<Eval>
      ::operator()(void) const
{
  return eval_type::eval(thrust::null_type());
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0) const
{
  return eval_type::eval(thrust::tie(_0));
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0, typename T1>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&,T1&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0, T1 &_1) const
{
  return eval_type::eval(thrust::tie(_0,_1));
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0, typename T1, typename T2>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&,T1&,T2&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0, T1 &_1, T2 &_2) const
{
  return eval_type::eval(thrust::tie(_0,_1,_2));
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0, typename T1, typename T2, typename T3>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&,T1&,T2&,T3&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0, T1 &_1, T2 &_2, T3 &_3) const
{
  return eval_type::eval(thrust::tie(_0,_1,_2,_3));
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0, typename T1, typename T2, typename T3, typename T4>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&,T1&,T2&,T3&,T4&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0, T1 &_1, T2 &_2, T3 &_3, T4 &_4) const
{
  return eval_type::eval(thrust::tie(_0,_1,_2,_3,_4));
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&,T1&,T2&,T3&,T4&,T5&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0, T1 &_1, T2 &_2, T3 &_3, T4 &_4, T5 &_5) const
{
  return eval_type::eval(thrust::tie(_0,_1,_2,_3,_4,_5));
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&,T1&,T2&,T3&,T4&,T5&,T6&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0, T1 &_1, T2 &_2, T3 &_3, T4 &_4, T5 &_5, T6 &_6) const
{
  return eval_type::eval(thrust::tie(_0,_1,_2,_3,_4,_5,_6));
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&,T1&,T2&,T3&,T4&,T5&,T6&,T7&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0, T1 &_1, T2 &_2, T3 &_3, T4 &_4, T5 &_5, T6 &_6, T7 &_7) const
{
  return eval_type::eval(thrust::tie(_0,_1,_2,_3,_4,_5,_6,_7));
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&,T1&,T2&,T3&,T4&,T5&,T6&,T7&,T8&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0, T1 &_1, T2 &_2, T3 &_3, T4 &_4, T5 &_5, T6 &_6, T7 &_7, T8 &_8) const
{
  return eval_type::eval(thrust::tie(_0,_1,_2,_3,_4,_5,_6,_7,_8));
} // end basic_environment::operator()

template<typename Eval>
  template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
    typename apply_actor<
      typename actor<Eval>::eval_type,
      typename thrust::tuple<T0&,T1&,T2&,T3&,T4&,T5&,T6&,T7&,T8&,T9&>
    >::type
      actor<Eval>
        ::operator()(T0 &_0, T1 &_1, T2 &_2, T3 &_3, T4 &_4, T5 &_5, T6 &_6, T7 &_7, T8 &_8, T9 &_9) const
{
  return eval_type::eval(thrust::tie(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9));
} // end basic_environment::operator()

} // end detail

} // end thrust
