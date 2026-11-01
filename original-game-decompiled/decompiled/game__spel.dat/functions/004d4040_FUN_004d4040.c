
/* ==== FUN_004d4040 @ 004d4040 ==== 
 * signature: undefined4 * __cdecl FUN_004d4040(int * param_1, int param_2, undefined4 param_3, undefined2 param_4)
 * body: 004d4040-004d4117
 */

undefined4 * __cdecl FUN_004d4040(int *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  void *this;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056fedb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004d4610(param_1);
  if ((0x31 < (int)uVar1) && ((int)uVar1 < 0x3b)) {
    puVar2 = (undefined4 *)FUN_004dc7d0(param_1);
    ExceptionList = pcStack_8;
    return puVar2;
  }
  if ((0x3a < (int)uVar1) && ((int)uVar1 < 0x42)) {
    puVar2 = (undefined4 *)FUN_004dc520(param_1);
    ExceptionList = pcStack_8;
    return puVar2;
  }
  this = operator_new(0x50);
  uStack_4 = 0;
  if (this != (void *)0x0) {
    puVar2 = FUN_004dc120(this,param_1,param_2,param_3,param_4);
    ExceptionList = pvStack_c;
    return puVar2;
  }
  ExceptionList = pvStack_c;
  return (undefined4 *)0x0;
}


