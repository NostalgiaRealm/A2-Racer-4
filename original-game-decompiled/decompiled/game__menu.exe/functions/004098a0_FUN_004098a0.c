
/* ==== FUN_004098a0 @ 004098a0 ==== 
 * signature: WORD __register FUN_004098a0(void)
 * body: 004098a0-004098b0
 */

WORD FUN_004098a0(void)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  return local_10.wYear;
}


