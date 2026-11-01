
/* ==== FUN_00416cc8 @ 00416cc8 ==== 
 * signature: int __thiscall FUN_00416cc8(void * this, int param_1, int param_2, int param_3)
 * body: 00416cc8-00416d10;00416d14-00416d38;00416d3c-00416d54;00416d58-00416daa
 */

int __thiscall FUN_00416cc8(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_00569b53;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00417190(this,param_1);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Invalid_source_state____00592f58);
  }
  iVar2 = FUN_00417190(this,param_2);
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Invalid_target_state____00592fa4);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Utility_function_is_NUL_00592ff0);
  }
  puVar3 = (undefined4 *)FUN_0041e3f0(auStack_18,iVar1,iVar2,param_3);
  uStack_4 = 0;
  FUN_004175a0(*(void **)((int)this + 0x24),*(undefined4 **)((int)*(void **)((int)this + 0x24) + 8),
               1,puVar3);
  uStack_4 = 0xffffffff;
  FUN_0041e410();
  iVar1 = (*(code *)**(undefined4 **)((int)this + 0x20))();
  ExceptionList = pvStack_c;
  return iVar1 + -1;
}


