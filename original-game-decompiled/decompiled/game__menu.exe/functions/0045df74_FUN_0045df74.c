
/* ==== FUN_0045df74 @ 0045df74 ==== 
 * signature: undefined4 __register FUN_0045df74(int param_1, uint param_2)
 * body: 0045df74-0045df8e
 */

undefined4 FUN_0045df74(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = TDaviGraphicDef_get_UpLink(param_1,param_2 & 0xff);
  return *(undefined4 *)(iVar1 + 0xc);
}


