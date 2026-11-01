
/* ==== FUN_00404dae @ 00404dae ==== 
 * signature: int __fastcall FUN_00404dae(undefined4 param_1)
 * body: 00404dae-00404daf
 */

int __fastcall FUN_00404dae(undefined4 param_1)

{
  undefined4 in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + 0x40) = *(undefined1 *)(unaff_EBP + 0x40);
  *(char *)(unaff_EBX + 0x5f5e0845) = *(char *)(unaff_EBX + 0x5f5e0845) + (char)param_1;
  return CONCAT22((short)((uint)in_EAX >> 0x10),
                  CONCAT11((char)((uint)in_EAX >> 8) + (char)((uint)param_1 >> 8),(char)in_EAX)) + 1
  ;
}


