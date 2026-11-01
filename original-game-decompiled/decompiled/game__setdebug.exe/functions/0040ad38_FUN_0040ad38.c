
/* ==== FUN_0040ad38 @ 0040ad38 ==== 
 * signature: undefined FUN_0040ad38(void)
 * body: 0040ad38-0040ad49
 */

undefined4 FUN_0040ad38(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0040acb8(param_1);
  return *(undefined4 *)(&DAT_0044621c + (uVar1 & 0xff) * 8);
}


