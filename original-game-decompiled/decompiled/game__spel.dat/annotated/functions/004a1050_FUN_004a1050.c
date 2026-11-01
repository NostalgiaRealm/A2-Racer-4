
/* ==== FUN_004a1050 @ 004a1050 ==== 
 * signature: undefined __fastcall FUN_004a1050(int param_1)
 * body: 004a1050-004a1172
 */

void __fastcall FUN_004a1050(int param_1)

{
  LPVOID pvVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056ed83;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x20) != '\0') {
    ExceptionList = &local_c;
    puVar2 = FUN_0049df90(local_58,(byte *)s_Using_BeginBrushBuild_twice_for_g_005af0e0);
    local_4 = 0;
    puVar3 = FUN_0049df90(local_48,(byte *)s_Physics_exception_in___s___d__005af050);
    local_4._0_1_ = 1;
    puVar2 = FUN_0047c9a0(local_38,puVar3,(int)puVar2);
    local_4._0_1_ = 2;
    FUN_00558826(local_28);
    local_4._0_1_ = 3;
    FUN_004028f0(local_1c,'\0');
    local_4._0_1_ = 4;
    local_28[0] = &PTR_FUN_005771c8;
    FUN_004093c0(local_1c,puVar2,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_00583178);
  }
  pvVar1 = *(LPVOID *)(param_1 + 0x14);
  ExceptionList = &local_c;
  if (pvVar1 != (LPVOID)0x0) {
    ExceptionList = &local_c;
    FUN_00511e90((int)pvVar1);
    FUN_0054b339(pvVar1);
  }
  puVar4 = operator_new(0xa0);
  local_4 = 5;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00511de0(puVar4);
  }
  *(undefined4 **)(param_1 + 0x14) = puVar4;
  *(undefined1 *)(param_1 + 0x20) = 1;
  ExceptionList = local_c;
  return;
}


