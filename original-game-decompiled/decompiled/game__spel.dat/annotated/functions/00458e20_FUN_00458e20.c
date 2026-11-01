
/* ==== FUN_00458e20 @ 00458e20 ==== 
 * signature: undefined __stdcall FUN_00458e20(void)
 * body: 00458e20-00458f4b
 */

void FUN_00458e20(void)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  longlong lVar3;
  float in_stack_00000044;
  float in_stack_0000004c;
  float fStack00000050;
  undefined4 uStack00000054;
  float fStack00000058;
  undefined4 auStack_74 [16];
  float local_34;
  undefined4 local_30;
  float local_18 [3];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056a7cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  lVar3 = __ftol();
  iVar1 = ((uint)lVar3 & DAT_005b23bc) * 4;
  uStack00000054 = 0x40a00000;
  local_18[1] = 5.0;
  fStack00000050 =
       (*(float *)(iVar1 + DAT_0073b578) * in_stack_00000044 -
       *(float *)(iVar1 + DAT_0073b530) * in_stack_0000004c) * 11.0;
  fStack00000058 =
       (*(float *)(iVar1 + DAT_0073b530) * in_stack_00000044 +
       *(float *)(iVar1 + DAT_0073b578) * in_stack_0000004c) * 11.0;
  local_18[0] = fStack00000050;
  local_18[2] = fStack00000058;
  FUN_00460370(local_18);
  local_30 = 0x458ed3;
  this = operator_new(0xb0);
  local_4 = 0;
  if (this != (void *)0x0) {
    local_34 = fStack00000050;
    local_30 = uStack00000054;
    puVar2 = auStack_74;
    for (iVar1 = 0x10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
        iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *(undefined4 *)register0x00000010;
      puVar2 = puVar2 + 1;
    }
    FUN_004a6800(0x7128b0);
    lVar3 = __ftol();
    FUN_00458f50(this,(int)lVar3);
  }
  ExceptionList = local_c;
  return;
}


