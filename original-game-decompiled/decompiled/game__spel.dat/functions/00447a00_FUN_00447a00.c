
/* ==== FUN_00447a00 @ 00447a00 ==== 
 * signature: undefined __cdecl FUN_00447a00(HINSTANCE param_1, int param_2)
 * body: 00447a00-00447a73;00447a77-00447a7e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00447a74-00447a76
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00447a00(HINSTANCE param_1,int param_2)

{
  int iVar1;
  
  if (DAT_006fb93c != 0) {
    FUN_004c7ed0(1);
  }
  iVar1 = FUN_004477a0();
  if (iVar1 != 0) {
    FUN_004c3f60(1);
  }
  FUN_004c3fa0((byte *)s_init_xvga_lib_0059e688);
  iVar1 = FUN_004c55c0(param_1,param_2,s_Davilex_Entertainment_0059e698,s_Davilex_Game_0059db3c);
  if (iVar1 == 0) {
    FUN_004c3fa0((byte *)s_error___couldn_t_initialize_prog_0059e6b0);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Function___s____init_xv_0059e6fc);
  }
  _DAT_006fa3d4 = param_1;
  return;
}


