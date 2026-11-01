
/* ==== FUN_00467d48 @ 00467d48 ==== 
 * signature: undefined4 __register FUN_00467d48(int param_1, uint param_2)
 * body: 00467d48-00467d60
 */

undefined4 FUN_00467d48(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = TGDIButtonDefinition_get_UpLink(param_1,param_2);
  return *(undefined4 *)(iVar1 + 0xc);
}


