
/* ==== FUN_10009930 @ 10009930 ==== 
 * signature: uint __cdecl FUN_10009930(int param_1)
 * body: 10009930-10009984
 */

uint __cdecl FUN_10009930(int param_1)

{
  uint local_c;
  
  local_c = DAT_10031a88;
  while( true ) {
    if (DAT_10031a88 + DAT_10031a84 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}


