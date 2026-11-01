
/* ==== FUN_00446e80 @ 00446e80 ==== 
 * signature: undefined __stdcall FUN_00446e80(void)
 * body: 00446e80-00446ee5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446e80(void)

{
  int iVar1;
  float10 fVar2;
  
  FUN_004c3fa0((byte *)s_Entry_init_clouds_0059da94);
  if (DAT_006fb8d0 != 0) {
    iVar1 = FUN_00446e50();
    if (iVar1 == 0) {
      FUN_004c3fa0((byte *)s_Clouds_disabled__Hardware_doesn__0059daa8);
      DAT_006fb904 = 0;
      return;
    }
  }
  FUN_00446cf0();
  FUN_00446dd0();
  DAT_006f5088 = FUN_004b7400(&DAT_00712130,s_S_SFX_PCX_0059dae4);
  fVar2 = FUN_004a67f0(0x7128b0);
  _DAT_006fa3cc = (float)fVar2;
  return;
}


