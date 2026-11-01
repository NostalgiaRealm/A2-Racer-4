
/* ==== FUN_004a1180 @ 004a1180 ==== 
 * signature: undefined __thiscall FUN_004a1180(void * this, float * param_1, float * param_2, float * param_3)
 * body: 004a1180-004a1428
 */

void __thiscall FUN_004a1180(void *this,float *param_1,float *param_2,float *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  ushort local_e8;
  ushort local_e6;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined1 local_e0 [3];
  undefined1 local_dd;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined **local_b8 [3];
  undefined1 local_ac [16];
  double local_9c;
  double local_94;
  double local_8c;
  double local_7c;
  double local_74;
  double local_6c;
  double local_5c;
  double local_54;
  double local_4c;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056edc9;
  local_c = ExceptionList;
  local_e8 = 0;
  local_e6 = 0;
  uStack_e4 = 0;
  uStack_e2 = 0;
  local_4 = 0;
  local_d0 = *param_1;
  local_cc = param_1[1];
  local_c4 = *param_2;
  local_c8 = param_1[2];
  local_c0 = param_2[1];
  local_dc = *param_3;
  local_bc = param_2[2];
  local_d8 = param_3[1];
  local_d4 = param_3[2];
  if (*(char *)((int)this + 0x20) == '\0') {
    ExceptionList = &local_c;
    puVar1 = FUN_0049df90(local_3c,(byte *)s_Use_BeginBrushBuild_before_AddTr_005af10c);
    local_4._0_1_ = 1;
    puVar2 = FUN_0049df90(local_2c,(byte *)s_Physics_exception_in___s___d__005af050);
    local_4._0_1_ = 2;
    puVar1 = FUN_0047c9a0(local_1c,puVar2,(int)puVar1);
    local_4._0_1_ = 3;
    FUN_00558826(local_b8);
    local_4._0_1_ = 4;
    local_ac[0] = local_dd;
    FUN_004028f0(local_ac,'\0');
    local_4._0_1_ = 5;
    local_b8[0] = &PTR_FUN_005771c8;
    FUN_004093c0(local_ac,puVar1,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,3);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_b8,&DAT_00583178);
  }
  ExceptionList = &local_c;
  FUN_004a4180(&local_d0);
  FUN_004a4180(&local_c4);
  FUN_004a4180(&local_dc);
  local_9c = (double)local_d0;
  local_94 = (double)local_cc;
  local_8c = (double)local_c8;
  local_5c = (double)local_c4;
  local_54 = (double)local_c0;
  local_4c = (double)local_bc;
  local_7c = (double)local_dc;
  local_74 = (double)local_d8;
  local_6c = (double)local_d4;
  if (local_e8 <= local_e6) {
    FUN_004f6060(&local_e8);
  }
  *(double **)(CONCAT22(uStack_e2,uStack_e4) + (uint)local_e6 * 4) = &local_9c;
  local_e6 = local_e6 + 1;
  if (local_e8 <= local_e6) {
    FUN_004f6060(&local_e8);
  }
  *(double **)(CONCAT22(uStack_e2,uStack_e4) + (uint)local_e6 * 4) = &local_5c;
  local_e6 = local_e6 + 1;
  if (local_e8 <= local_e6) {
    FUN_004f6060(&local_e8);
  }
  *(double **)(CONCAT22(uStack_e2,uStack_e4) + (uint)local_e6 * 4) = &local_7c;
  local_e6 = local_e6 + 1;
  if (*(char *)((int)this + 0x20) != '\0') {
    piVar3 = FUN_00511cc0((int)&local_e8);
    if (piVar3 != (int *)0x0) {
      FUN_00511f80(*(void **)((int)this + 0x14),(int)piVar3);
    }
  }
  puVar1 = (undefined1 *)CONCAT22(uStack_e2,uStack_e4);
  if ((puVar1 != local_e0) && (puVar1 != (undefined1 *)0x0)) {
    FUN_00559d4e(puVar1);
  }
  ExceptionList = local_c;
  return;
}


