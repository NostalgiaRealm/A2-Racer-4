
/* ==== FUN_00408c20 @ 00408c20 ==== 
 * signature: WORD __register FUN_00408c20(void)
 * body: 00408c20-00408c30
 */

WORD FUN_00408c20(void)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  return local_10.wYear;
}


