
/* ==== FUN_004ab660 @ 004ab660 ==== 
 * signature: undefined1 * __fastcall FUN_004ab660(undefined1 * param_1)
 * body: 004ab660-004ab68d
 */

undefined1 * __fastcall FUN_004ab660(undefined1 *param_1)

{
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *param_1 = local_1;
  FUN_004028f0(param_1,'\0');
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return param_1;
}


