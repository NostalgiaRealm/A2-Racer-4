
/* ==== __break @ 100155cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 100155cb-100155cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


