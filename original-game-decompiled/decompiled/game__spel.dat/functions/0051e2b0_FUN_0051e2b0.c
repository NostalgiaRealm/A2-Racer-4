
/* ==== FUN_0051e2b0 @ 0051e2b0 ==== 
 * signature: undefined __cdecl FUN_0051e2b0(undefined4 * param_1, int param_2)
 * body: 0051e2b0-0051e331
 */

void __cdecl FUN_0051e2b0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 <= DAT_0074c760) {
      DAT_0074c79c = DAT_0074c79c + 1;
      iVar2 = *(int *)(DAT_0074c770 + param_2 * 4);
      puVar1 = (undefined4 *)(DAT_0074c768 + iVar2 * 4);
      *param_1 = *(undefined4 *)(DAT_0074c768 + iVar2 * 4);
      *puVar1 = param_1;
      return;
    }
    DAT_0074c7a0 = DAT_0074c7a0 + 1;
    DAT_0074c7a8 = DAT_0074c7a8 - param_2;
    FUN_00559d4e(param_1);
    if (4 < DAT_0074c788) {
      FUN_00558953(DAT_0074c784,(byte *)s_qh_memfree_long___d_bytes_at__p_005be4a4);
    }
  }
  return;
}


