
/* ==== FUN_004bd4f8 @ 004bd4f8 ==== 
 * signature: undefined4 * __fastcall FUN_004bd4f8(undefined4 * param_1)
 * body: 004bd4f8-004bd4ff
 */

undefined4 * __fastcall FUN_004bd4f8(undefined4 *param_1)

{
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056f70b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004bf5d0(param_1 + 3);
  uStack_4 = 0;
  FUN_004c1ab0(param_1 + 0x26);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0xffffffff;
  ExceptionList = pvStack_c;
  return param_1;
}


