
/* ==== FUN_00402c50 @ 00402c50 ==== 
 * signature: undefined4 __register FUN_00402c50(uint param_1)
 * body: 00402c50-00402c65
 */

undefined4 FUN_00402c50(uint param_1)

{
  DAT_004ac044 = DAT_004ac044 * 0x8088405 + 1;
  return (int)((ulonglong)param_1 * (ulonglong)DAT_004ac044 >> 0x20);
}


