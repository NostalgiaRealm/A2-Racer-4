
/* ==== FUN_004093dc @ 004093dc ==== 
 * signature: undefined1 __register FUN_004093dc(ushort param_1, ushort param_2, ushort param_3, double * param_4, ushort param_5)
 * body: 004093dc-00409446
 */

undefined1 FUN_004093dc(ushort param_1,ushort param_2,ushort param_3,double *param_4,ushort param_5)

{
  undefined1 local_5;
  
  local_5 = 0;
  if ((((param_1 < 0x18) && (param_2 < 0x3c)) && (param_3 < 0x3c)) && (param_5 < 1000)) {
    *param_4 = (double)((float)(int)((uint)param_1 * 3600000 + (uint)param_2 * 60000 +
                                     (uint)param_3 * 1000 + (uint)param_5) / 8.64e+07);
    local_5 = 1;
  }
  return local_5;
}


