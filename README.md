# Vimax Core

Vimax — это не программа.

Vimax — это среда исполнения человеческих намерений.


> **People shouldn't have to learn software.  
> Software should understand people.**

---

## What is Vimax?

**Vimax** is a local-first modular runtime that transforms natural language into safe, auditable workflows.

Instead of forcing people to learn applications, menus and interfaces, Vimax allows them to simply describe what they want.

Examples:

- "I want to make Gouda cheese."
- "Book me a manicure next Friday after 18:00."
- "Start the distillation process."
- "Order rennet."
- "Turn off the workshop lights."

Vimax understands the user's intent, builds a safe execution plan, requests confirmation when required and delegates execution to the appropriate module.

---

# Vision

Modern software expects humans to adapt to computers.

Vimax reverses that idea.

Humans communicate naturally.

Software adapts to humans.

---

# Philosophy

Vimax is **not** another automation framework.

It is a universal runtime for real-world tasks.

The conversation is the interface.

The workflow is the execution model.

Modules provide domain knowledge.

Policies guarantee safety.

---

# Core Principles

### Conversation First

Users describe goals.

They don't search for applications.

---

### Local First

Critical functionality must continue working without cloud services.

Cloud integration is optional.

---

### Safety Before Automation

Automation must never bypass safety.

Every critical action requires the appropriate level of confirmation.

---

### Explainable Decisions

Every action performed by Vimax must be understandable.

The system should always be able to answer:

- Why?
- What happened?
- What will happen next?

---

### Human In Control

Vimax assists people.

It never silently takes control.

---

### Modular Architecture

The Core knows nothing about cheese, booking, distillation or smart homes.

Those capabilities are provided by installable modules.

---

# Architecture

```text
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
              ┌───────┴────────┐
              ▼                ▼
       Context Engine    Policy Engine
              └───────┬────────┘
                      ▼
              Module Manager
                      │
      ┌───────────────┼────────────────┐
      ▼               ▼                ▼
   Cheese         Booking       Distillation
```

---

# Core Components

- Conversation Engine
- Intent Resolver
- Workflow Engine
- Context Engine
- Policy Engine
- Scheduler
- Notification Engine
- Audit Engine
- Module Manager
- Connector Manager

---

# Modules

Examples of independent Vimax modules:

- 🧀 Cheese
- 🍺 Brewing
- 🥃 Distillation
- 📅 Booking
- 📆 Calendar
- 🏠 Smart Home
- 📦 Inventory
- 🛒 Shopping
- 📧 Email

New modules can be added without modifying the Core.

---

# Design Goals

- Local-first
- Modular
- Explainable
- Secure
- Extensible
- Offline-capable
- Developer-friendly

---

# Example

User:

```text
I want to make Gouda cheese.
```

↓

Intent

```text
cheese.start_batch
```

↓

Workflow

```text
Create Batch

↓

Load Recipe

↓

Calculate Ingredients

↓

Start Guided Process
```

↓

Module

```text
Vimax Cheese
```

---

# Roadmap

## v0.1

- Foundation
- Core Runtime
- Module Registry
- Policy Engine
- Audit Log

## v0.2

- Intent Engine
- Context Memory
- SQLite
- Plugin Manifest
- Configuration System

## v0.3

- Workflow Engine
- Scheduler
- Notification Engine

## v0.4

- Recipe Engine
- Booking Engine
- Connector Framework

## v0.5

- REST API
- WebSocket API
- Authentication
- Web UI

## v1.0

Production Ready

---

# Repository Structure

```text
apps/
docs/
include/
modules/
src/
tests/
```

---

# Current Status

**Version**

```
0.1.0-alpha
```

The architecture is under active development.

Public APIs may change before the first stable release.

---

# Mission

> **People shouldn't have to learn software.**
>
> **They should simply describe what they want to accomplish.**
>
> **Vimax takes care of the rest.**

---

# License

Business Source License 1.1 (temporary)

The licensing model will be finalized before the first production release.
