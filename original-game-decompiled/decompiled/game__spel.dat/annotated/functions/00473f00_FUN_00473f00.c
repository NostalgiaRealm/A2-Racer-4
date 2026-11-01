
/* ==== FUN_00473f00 @ 00473f00 ==== 
 * signature: undefined __cdecl FUN_00473f00(int * param_1, int param_2)
 * body: 00473f00-00473f4d
 */

void __cdecl FUN_00473f00(int *param_1,int param_2)

{
  if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
    *(undefined4 *)(DAT_0073b0d0 + *(int *)(*param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0xa5) =
         *(undefined4 *)(param_2 + 0x10);
  }
  return;
}


