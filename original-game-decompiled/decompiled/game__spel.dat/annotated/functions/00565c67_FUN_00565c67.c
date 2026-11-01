
/* ==== FUN_00565c67 @ 00565c67 ==== 
 * signature: undefined * __stdcall FUN_00565c67(void)
 * body: 00565c67-00565cca
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00565c67(void)

{
  undefined4 in_stack_ffffffd8;
  undefined2 uVar1;
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar1 = (undefined2)((uint)in_stack_ffffffd8 >> 0x10);
  FUN_00565ccb(&local_10,(uint *)&stack0x00000004);
  _DAT_0074e008 = FUN_00567fd0(local_10,uStack_c,CONCAT22(uVar1,uStack_8),0x11,0,&DAT_0074dfe0);
  _DAT_0074e000 = (int)DAT_0074dfe2;
  _DAT_0074e004 = (int)DAT_0074dfe0;
  _DAT_0074e00c = &DAT_0074dfe4;
  return &DAT_0074e000;
}


