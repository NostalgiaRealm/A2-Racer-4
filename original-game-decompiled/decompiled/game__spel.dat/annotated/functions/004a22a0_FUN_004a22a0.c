
/* ==== FUN_004a22a0 @ 004a22a0 ==== 
 * signature: undefined4 * __fastcall FUN_004a22a0(undefined4 * param_1)
 * body: 004a22a0-004a24c5
 */

undefined4 * __fastcall FUN_004a22a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ee66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004a0210(param_1);
  local_4 = 0;
  FUN_004a0210(param_1 + 0x2e);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004a0210(param_1 + 0x5c);
  param_1[0x8a] = 0xc1700000;
  param_1[0x8b] = 0xc0000000;
  *(undefined1 *)(param_1 + 0x96) = 0;
  param_1[0x8c] = 0x41700000;
  param_1[0x8d] = 0x41700000;
  param_1[0x8e] = 0xc0000000;
  param_1[0x8f] = 0x41700000;
  param_1[0x90] = 0xc1700000;
  param_1[0x91] = 0xc0000000;
  param_1[0x92] = 0xc1700000;
  param_1[0x93] = 0x41700000;
  param_1[0x9b] = 0;
  param_1[0x94] = 0xc0000000;
  param_1[0x97] = 0x3dcccccd;
  param_1[0x98] = 0x3f000000;
  param_1[0x99] = 0x40000000;
  param_1[0x95] = 0xc1700000;
  param_1[0x9a] = 0x3fc00000;
  puVar1 = param_1 + 0xa8;
  iVar2 = 4;
  do {
    puVar1[-4] = 0x466a6000;
    *puVar1 = 0x45fa0000;
    puVar1[4] = 0x44c80000;
    puVar1[8] = 0x45fa0000;
    puVar1[0xc] = 0x461c4000;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0xb6] = 0x3f1c61aa;
  param_1[0xb7] = 0x41f00000;
  param_1[0xb8] = 0x42f00000;
  param_1[0xb9] = 0x457a0000;
  param_1[0xba] = 0x44bb8000;
  param_1[0xbb] = 0x3f400000;
  param_1[0xbc] = 0x3f000000;
  param_1[0xbd] = 0x3fc00000;
  param_1[0xbe] = 0x41280000;
  param_1[0xbf] = 0x43340000;
  param_1[0xc0] = 0x40733333;
  param_1[0xc2] = 0x40333333;
  param_1[0xc3] = 0x400ccccd;
  param_1[0xc4] = 0x3fa66666;
  param_1[0xc5] = 0x3f800000;
  param_1[0xc6] = 0x3f4ccccd;
  ExceptionList = local_c;
  return param_1;
}


