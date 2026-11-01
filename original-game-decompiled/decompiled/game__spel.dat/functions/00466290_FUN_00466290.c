
/* ==== FUN_00466290 @ 00466290 ==== 
 * signature: undefined __cdecl FUN_00466290(int param_1)
 * body: 00466290-00466351
 */

void __cdecl FUN_00466290(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b75a0(&DAT_00712130,s_C_TREIN_005a71e8);
  iVar1 = FUN_004a7790(0,0,0,0,0,0,iVar1,0,0,0,0);
  FUN_00450b00(iVar1,s_TRAIN_005a71f0);
  *(undefined4 *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) = 0;
  (&DAT_0070a244)[param_1 * 0xd0] = iVar1;
  return;
}


