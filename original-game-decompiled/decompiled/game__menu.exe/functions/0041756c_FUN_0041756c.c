
/* ==== FUN_0041756c @ 0041756c ==== 
 * signature: undefined __register FUN_0041756c(HGDIOBJ param_1)
 * body: 0041756c-0041757e
 */

void FUN_0041756c(HGDIOBJ param_1)

{
  if ((param_1 != (HGDIOBJ)0x0) && (param_1 != DAT_004ac650)) {
    DeleteObject(param_1);
  }
  return;
}


