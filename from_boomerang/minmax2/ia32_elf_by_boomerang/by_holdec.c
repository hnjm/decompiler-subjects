// Decompiled by holdec 1.1 (2012-03-24)

/* The decompilation of 0x08048268 / printf failed: java.lang.AssertionError: Block L0 calls block L1 which isn't available */

// addr = 080482a6.0
// signature= func(F_080482a6, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_080482a6(???)
{
  reg_result = LOAD(LOAD(InitStackPointer) + 4818);
  if(reg_result  !=  0) {
    reg_result = intern_redirectCall(reg_result);
  }
  return reg_result;
}

// addr = 08048328.0
// signature= func(test, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? test(???)
{
  if(ARG_0  <  -2) {
    (void) STORE(&ARG_0, -2);
  }
  if(ARG_0  >  3) {
    (void) STORE(&ARG_0, 3);
  }
  reg_result = printf();
  return reg_result;
}

// addr = 0804835d.0
// signature= func(main, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? main(???)
{
  (void) test();
  (void) test();
  (void) test();
  (void) test();
  (void) test();
  return 0;
}

// addr = 0804844a.0
// signature= func(F_0804844a, ret=[<0, int(undef, 4),null,reg[eax]>], para=[], varargs=false)
??? F_0804844a(???)
{
  reg_result = __do_global_dtors_aux();
  return reg_result;
}

