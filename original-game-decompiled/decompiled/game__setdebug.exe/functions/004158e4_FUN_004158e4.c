
/* ==== FUN_004158e4 @ 004158e4 ==== 
 * signature: undefined __register FUN_004158e4(HGDIOBJ param_1)
 * body: 004158e4-004158f6
 */

void FUN_004158e4(HGDIOBJ param_1)

{
  if ((param_1 != (HGDIOBJ)0x0) && (param_1 != DAT_00447648)) {
    DeleteObject(param_1);
  }
  return;
}


