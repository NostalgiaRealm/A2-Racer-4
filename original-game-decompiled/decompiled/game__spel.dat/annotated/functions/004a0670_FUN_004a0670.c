
/* ==== FUN_004a0670 @ 004a0670 ==== 
 * signature: undefined __thiscall FUN_004a0670(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 004a0670-004a07f1
 */

void __thiscall
FUN_004a0670(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
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
  
  pcStack_8 = FUN_0056eca0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004093c0(this,&param_2,0,0xffffffff);
  *(undefined4 *)((int)this + 0x10) = param_1;
  switch(param_6) {
  case 0:
  case 3:
    break;
  case 1:
    puVar4 = FUN_004a0e50(this,(float *)&stack0x0000001c,(float *)&stack0x00000028);
    goto LAB_004a07a9;
  default:
    break;
  case 4:
    if (*(char *)((int)this + 0x20) != '\0') {
      puVar2 = FUN_0049df90(local_58,(byte *)s_Init_geometry_while_building_for_005af0b4);
      local_4._0_1_ = 1;
      puVar3 = FUN_0049df90(local_48,(byte *)s_Physics_exception_in___s___d__005af050);
      local_4._0_1_ = 2;
      puVar2 = FUN_0047c9a0(local_38,puVar3,(int)puVar2);
      local_4._0_1_ = 3;
      FUN_00558826(local_28);
      local_1c[0] = (undefined1)param_1;
      local_4._0_1_ = 4;
      FUN_004028f0(local_1c,'\0');
      local_4._0_1_ = 5;
      local_28[0] = &PTR_FUN_005771c8;
      FUN_004093c0(local_1c,puVar2,0,0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,3);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_00583178);
    }
    goto LAB_004a07ac;
  }
  puVar4 = FUN_004a0b20(this,(float *)&stack0x0000001c);
LAB_004a07a9:
  *(undefined4 **)((int)this + 0x18) = puVar4;
LAB_004a07ac:
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_3 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_0054b339((LPVOID)(param_3 + -1));
  }
  ExceptionList = local_c;
  return;
}


