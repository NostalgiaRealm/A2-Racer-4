
/* ==== __break @ 0055e1bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0055e1bb-0055e1bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


