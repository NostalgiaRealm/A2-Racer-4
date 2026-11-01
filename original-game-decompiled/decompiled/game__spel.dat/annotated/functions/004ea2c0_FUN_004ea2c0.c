
/* ==== FUN_004ea2c0 @ 004ea2c0 ==== 
 * signature: int __thiscall FUN_004ea2c0(void * this, int param_1)
 * body: 004ea2c0-004ea3d1
 */

int __thiscall FUN_004ea2c0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_c0 [16];
  undefined1 local_b0 [32];
  undefined1 local_90 [48];
  undefined1 local_60 [56];
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0057218f;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff18;
  puVar4 = (undefined4 *)((int)this + 4);
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = FUN_004eced0(puVar4,param_1);
  if (iVar2 != -1) {
    local_18 = (**(code **)**(undefined4 **)(*(int *)(*(int *)((int)this + 0x10) + 4) + iVar2 * 4))
                         ();
    FUN_004ecea0(puVar4,&local_18);
    local_8 = 0xffffffff;
    iVar2 = (**(code **)*puVar4)();
    ExceptionList = local_10;
    return iVar2 + -1;
  }
  local_28[0] = param_1._3_1_;
  FUN_004028f0(local_28,'\0');
  uVar5 = 0xffffffff;
  pcVar6 = s_Unable_to_find_typecreator___005af570;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00402940(local_28,(undefined4 *)s_Unable_to_find_typecreator___005af570,~uVar5 - 1);
  local_8._0_1_ = 1;
  puVar3 = FUN_0049df90(local_c0,(byte *)s_FacMan_exception_in___s___d__005af2bc);
  local_8._0_1_ = 2;
  puVar3 = FUN_0047c9a0(local_90,puVar3,(int)local_28);
  local_8._0_1_ = 3;
  puVar4 = (undefined4 *)FUN_0047c9a0(local_b0,puVar3,param_1);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004a5260(local_60,puVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_60,&DAT_00583558);
}


