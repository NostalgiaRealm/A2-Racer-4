
/* ==== FUN_00481588 @ 00481588 ==== 
 * signature: bool __register FUN_00481588(void)
 * body: 00481588-0048159a
 */

bool FUN_00481588(void)

{
  LONG LVar1;
  
  LVar1 = ChangeDisplaySettingsA((DEVMODEA *)0x0,0);
  return LVar1 == 0;
}


