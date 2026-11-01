
/* ==== FUN_00462070 @ 00462070 ==== 
 * signature: undefined FUN_00462070(void)
 * body: 00462070-00462077
 */

undefined4 FUN_00462070(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + 0x50 + (param_2 & 0x7f) * 4);
}


