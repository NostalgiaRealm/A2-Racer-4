
/* ==== FUN_004613e0 @ 004613e0 ==== 
 * signature: undefined4 * __stdcall FUN_004613e0(void)
 * body: 004613e0-00461560
 */

undefined4 * FUN_004613e0(void)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  float in_stack_00000044;
  undefined4 uStack00000048;
  float in_stack_0000004c;
  float fStack00000050;
  undefined4 uStack00000054;
  float fStack00000058;
  undefined4 auStack_74 [16];
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_18 [3];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ab0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  lVar4 = __ftol();
  iVar1 = ((uint)lVar4 & DAT_005b23bc) * 4;
  uStack00000048 = 0;
  fStack00000058 =
       *(float *)(iVar1 + DAT_0073b530) * in_stack_00000044 +
       *(float *)(iVar1 + DAT_0073b578) * in_stack_0000004c;
  uStack00000054 = 0;
  local_18[1] = 0.0;
  fStack00000050 =
       (*(float *)(iVar1 + DAT_0073b578) * in_stack_00000044 -
       *(float *)(iVar1 + DAT_0073b530) * in_stack_0000004c) * 6.0;
  fStack00000058 = fStack00000058 * 5.0 + fStack00000058;
  local_2c = 6.435917e-39;
  local_18[0] = fStack00000050;
  local_18[2] = fStack00000058;
  FUN_00460370(local_18);
  FUN_004a6800(0x7128b0);
  lVar4 = __ftol();
  iVar1 = (int)lVar4;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  local_2c = 6.43599e-39;
  this = operator_new(0xb0);
  local_4 = 0;
  if (this != (void *)0x0) {
    local_34 = fStack00000050;
    local_30 = uStack00000054;
    local_2c = fStack00000058;
    puVar2 = auStack_74;
    for (iVar3 = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
        iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *(undefined4 *)register0x00000010;
      puVar2 = puVar2 + 1;
    }
    puVar2 = FUN_00461570(this,iVar1);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


