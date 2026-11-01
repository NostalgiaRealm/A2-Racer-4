
/* ==== FUN_004eb890 @ 004eb890 ==== 
 * signature: undefined __thiscall FUN_004eb890(void * this, int param_1)
 * body: 004eb890-004eb9d1
 */

void __thiscall FUN_004eb890(void *this,int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_9c [56];
  undefined1 local_64 [28];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0057246c;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff0c;
  local_8 = 0;
  local_18 = param_1;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    iVar4 = FUN_004eced0((void *)((int)this + 4),param_1 + 4);
    if (iVar4 != -1) {
      puVar2 = FUN_004900f0(local_38,s_Trying_to_add_creator_that_alrea_005af290,
                            (undefined1 *)((int)&param_1 + 3));
      local_8._0_1_ = 4;
      puVar5 = FUN_0049df90(local_48,(byte *)s_FacMan_exception_in___s___d__005af2bc);
      local_8._0_1_ = 5;
      puVar3 = (undefined4 *)FUN_0047c9a0(local_28,puVar5,(int)puVar2);
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_004a5260(local_9c,puVar3);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_9c,&DAT_00583558);
    }
    FUN_004ecea0((void *)((int)this + 0xc),&local_18);
    ExceptionList = local_10;
    return;
  }
  local_28[0] = 0;
  ExceptionList = &local_10;
  local_14 = &stack0xffffff0c;
  FUN_004028f0(local_28,'\0');
  uVar6 = 0xffffffff;
  pcVar7 = s_NULL_pointer_passed_as_a_creator_005af314;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_28,(undefined4 *)s_NULL_pointer_passed_as_a_creator_005af314,~uVar6 - 1);
  local_8._0_1_ = 1;
  puVar2 = FUN_0049df90(local_48,(byte *)s_FacMan_exception_in___s___d__005af2bc);
  local_8._0_1_ = 2;
  puVar3 = (undefined4 *)FUN_0047c9a0(local_38,puVar2,(int)local_28);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004a5260(local_64,puVar3);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_64,&DAT_00583558);
}


