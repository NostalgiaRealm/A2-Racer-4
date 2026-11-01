
/* ==== FUN_004654b0 @ 004654b0 ==== 
 * signature: undefined __cdecl FUN_004654b0(int param_1)
 * body: 004654b0-00465571
 */

void __cdecl FUN_004654b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b75a0(&DAT_00712130,s_a_VLIEGT_005a6e40);
  iVar1 = FUN_004a7790(0,0,0,0,0,0,iVar1,0,0,0,0);
  *(undefined4 *)(iVar1 * 0xf0 + 0x5c + DAT_00715e50) = 0;
  FUN_00450b00(iVar1,s_PLANE_005a6e4c);
  (&DAT_0070a244)[param_1 * 0xd0] = iVar1;
  return;
}


