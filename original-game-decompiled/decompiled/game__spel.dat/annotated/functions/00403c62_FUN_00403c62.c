
/* ==== FUN_00403c62 @ 00403c62 ==== 
 * signature: undefined __stdcall FUN_00403c62(float param_1, undefined4 param_2, float param_3, float param_4, float param_5)
 * body: 00403c62-00403c6f
 */

void FUN_00403c62(float param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  if ((-1 < (int)param_1) && ((int)param_1 < 0x13)) {
    HandleGasBreak((int)param_1);
    FUN_00403a70(param_1,param_3,param_4,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s___s___d_Illegal_index___d__in_FS_0058ec10);
}


