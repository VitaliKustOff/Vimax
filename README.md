# Vimax Core

**An AI-first modular runtime for real-world automation.**

Vimax Core transforms natural language into safe, auditable workflows using pluggable domain engines.

---

## Vision

People shouldn't have to learn software.

They should simply say what they want.

Examples:

• "I want to make Gouda cheese."

• "Book me a manicure on Friday after 18:00."

• "Start the distillation process."

• "Order rennet."

Vimax Core understands the intent, builds a safe workflow, requests confirmation when required and executes it through installed modules.

---

## Core Principles

- AI is the interface, not the decision maker.
- Safety before automation.
- Every action is auditable.
- Everything is modular.
- Local-first architecture.
- Human stays in control.

---

## Current Status

0.1.0-alpha
***
                 User
                   │
                   ▼
          Conversation Engine
                   │
                   ▼
            Intent Resolver
                   │
                   ▼
           Workflow Engine
                   │
          ┌────────┴────────┐
          ▼                 ▼
     Policy Engine     Context Engine
          │                 │
          └────────┬────────┘
                   ▼
             Module Manager
                   │
     ┌─────────────┼──────────────┐
     ▼             ▼              ▼
 Cheese       Booking      Distillation
