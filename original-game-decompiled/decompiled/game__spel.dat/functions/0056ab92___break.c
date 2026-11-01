
/* ==== __break @ 0056ab92 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0056ab92-0056ab92
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


