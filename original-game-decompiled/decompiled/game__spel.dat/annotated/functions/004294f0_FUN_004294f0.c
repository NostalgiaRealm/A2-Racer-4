
/* ==== FUN_004294f0 @ 004294f0 ==== 
 * signature: undefined __cdecl FUN_004294f0(void * param_1, undefined4 param_2, undefined4 param_3, uint param_4, undefined4 param_5)
 * body: 004294f0-0042970c
 */

void __cdecl
FUN_004294f0(void *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  int local_30;
  undefined1 local_24 [4];
  int local_20;
  void *local_14;
  code *pcStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_0056a188;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004028f0(local_34,'\0');
  local_c = 0;
  puVar2 = FUN_0049df90(local_24,(byte *)s__s__d_WheelMaterial_005968b8);
  local_c._0_1_ = 1;
  FUN_004093c0(local_34,puVar2,0,0xffffffff);
  local_c = (uint)local_c._1_3_ << 8;
  if (local_20 != 0) {
    cVar1 = *(char *)(local_20 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(local_20 + -1));
    }
    else {
      *(char *)(local_20 + -1) = cVar1 + -1;
    }
  }
  puVar3 = (undefined4 *)FUN_004a4430(&DAT_00715f58,(int)local_34);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = FUN_004a4510(&DAT_00715f58,local_34,0.7,0.5);
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = 0xa0000000;
  *(undefined4 **)((int)param_1 + 0x14) = puVar3;
  *(undefined1 *)((int)param_1 + 0x84) = 1;
  *(undefined4 *)((int)param_1 + 0x88) = 0x40800000;
  *(undefined4 *)((int)param_1 + 0x1c) = 0x4062c000;
  *(undefined4 *)((int)param_1 + 0x20) = 1;
  *(undefined4 *)((int)param_1 + 0x3c) = 0x3fa99999;
  *(undefined4 *)((int)param_1 + 0x40) = 0x33333333;
  *(undefined4 *)((int)param_1 + 0x48) = 0x33333333;
  *(undefined4 *)((int)param_1 + 0x50) = 0x33333333;
  *(undefined4 *)((int)param_1 + 0x44) = 0x3fe33333;
  *(undefined4 *)((int)param_1 + 0x4c) = 0x3fe33333;
  *(undefined4 *)((int)param_1 + 0x54) = 0x3fe33333;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0xa8) = 1;
  *(undefined4 *)((int)param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xac) = param_5;
  FUN_0049df90(local_44,(byte *)s_wheel_d_005968cc);
  local_c = CONCAT31(local_c._1_3_,2);
  FUN_004093c0((void *)((int)param_1 + 0x70),local_44,0,0xffffffff);
  pcVar4 = *(char **)((int)param_1 + 0x74);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004f5480(param_1,pcVar4);
  FUN_004a02a0(param_1,DAT_006c2f38 | param_4);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0x94) = 0;
  *(undefined4 *)((int)param_1 + 0x98) = 0;
  if (local_40 != 0) {
    cVar1 = *(char *)(local_40 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((LPVOID)(local_40 + -1));
    }
    else {
      *(char *)(local_40 + -1) = cVar1 + -1;
    }
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (local_30 != 0) {
    cVar1 = *(char *)(local_30 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_30 + -1) = cVar1 + -1;
      ExceptionList = local_14;
      return;
    }
    FUN_0054b339((LPVOID)(local_30 + -1));
  }
  ExceptionList = local_14;
  return;
}


